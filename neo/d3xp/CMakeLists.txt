# d3xp ( game-d3xp.vcxproj -> d3xp/gamex86.dll / d3xp/gamex86-d3xp.so )
#
# The expansion pack project: the full game source set plus Grabber.cpp and
# Force_Grab.cpp, all under d3xp/, with _D3XP and CTF defined.

set( D3XP_SOURCES
	ai/AAS.cpp
	ai/AAS_debug.cpp
	ai/AAS_pathing.cpp
	ai/AAS_routing.cpp
	ai/AI.cpp
	ai/AI_events.cpp
	ai/AI_pathing.cpp
	ai/AI_Vagary.cpp
	anim/Anim.cpp
	anim/Anim_Blend.cpp
	anim/Anim_Import.cpp
	anim/Anim_Testmodel.cpp
	gamesys/Class.cpp
	gamesys/DebugGraph.cpp
	gamesys/Event.cpp
	gamesys/SaveGame.cpp
	gamesys/SysCmds.cpp
	gamesys/SysCvar.cpp
	gamesys/TypeInfo.cpp
	physics/Clip.cpp
	physics/Force.cpp
	physics/Force_Constant.cpp
	physics/Force_Drag.cpp
	physics/Force_Field.cpp
	physics/Force_Grab.cpp
	physics/Force_Spring.cpp
	physics/Physics.cpp
	physics/Physics_Actor.cpp
	physics/Physics_AF.cpp
	physics/Physics_Base.cpp
	physics/Physics_Monster.cpp
	physics/Physics_Parametric.cpp
	physics/Physics_Player.cpp
	physics/Physics_RigidBody.cpp
	physics/Physics_Static.cpp
	physics/Physics_StaticMulti.cpp
	physics/Push.cpp
	script/Script_Compiler.cpp
	script/Script_Interpreter.cpp
	script/Script_Program.cpp
	script/Script_Thread.cpp
	Actor.cpp
	AF.cpp
	AFEntity.cpp
	BrittleFracture.cpp
	Camera.cpp
	Entity.cpp
	Fx.cpp
	Game_local.cpp
	Game_network.cpp
	GameEdit.cpp
	Grabber.cpp
	IK.cpp
	Item.cpp
	Light.cpp
	Misc.cpp
	Moveable.cpp
	Mover.cpp
	MultiplayerGame.cpp
	Player.cpp
	PlayerIcon.cpp
	PlayerView.cpp
	Projectile.cpp
	Pvs.cpp
	SecurityCamera.cpp
	SmokeParticles.cpp
	Sound.cpp
	Target.cpp
	Trigger.cpp
	Weapon.cpp
	WorldSpawn.cpp
	../idlib/precompiled.cpp )

if( MSVC )
	add_library( d3xp MODULE ${D3XP_SOURCES} Game.def )
	# gamesys/TypeInfo.cpp macroizes private/protected to inspect class members
	# so modern MSVC needs _ALLOW_KEYWORD_MACROS
	target_compile_definitions( d3xp PRIVATE __DOOM__ GAME_DLL _D3XP CTF _ALLOW_KEYWORD_MACROS )
	set_target_properties( d3xp PROPERTIES
		OUTPUT_NAME gamex86
		RUNTIME_OUTPUT_DIRECTORY ${DOOM3_OUTPUT_DIR}/d3xp )

	# regenerate the typeinfo header before compiling the module ( the tool
	# must run from the repository root with the d3xp argument, it finds the
	# tree through the SOURCE_CODE_BASE_FOLDER define in framework/Licensee.h )
	add_custom_command(
		OUTPUT ${CMAKE_SOURCE_DIR}/d3xp/gamesys/GameTypeInfo.h
		COMMAND $<TARGET_FILE:typeinfo> d3xp
		WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/..
		DEPENDS typeinfo
		COMMENT "Running typeinfo to generate d3xp GameTypeInfo.h" )
	target_sources( d3xp PRIVATE ${CMAKE_SOURCE_DIR}/d3xp/gamesys/GameTypeInfo.h )
else()
	add_library( d3xp SHARED ${D3XP_SOURCES} )
	target_compile_definitions( d3xp PRIVATE GAME_DLL _D3XP CTF )
	set_target_properties( d3xp PROPERTIES
		OUTPUT_NAME gamex86-d3xp
		LIBRARY_OUTPUT_DIRECTORY ${DOOM3_OUTPUT_DIR}/d3xp )
endif()

target_link_libraries( d3xp PRIVATE idlib )
