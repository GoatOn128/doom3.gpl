# game ( game.vcxproj -> gamex86.dll / gamex86-base.so )
#
# Windows: the vcxproj runs the typeinfo tool as a pre-build step and compiles
# the generated GameTypeInfo.h alongside the module. The custom command below
# reproduces that.

set( GAME_SOURCES
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
	WorldSpawn.cpp )

if( MSVC )
	add_library( game MODULE ${GAME_SOURCES} Game.def )
	# gamesys/TypeInfo.cpp macroizes private/protected to inspect class members
	# so modern MSVC needs _ALLOW_KEYWORD_MACROS
	target_compile_definitions( game PRIVATE __DOOM__ GAME_DLL _ALLOW_KEYWORD_MACROS )
	set_target_properties( game PROPERTIES
		OUTPUT_NAME gamex86
		RUNTIME_OUTPUT_DIRECTORY ${DOOM3_OUTPUT_DIR}/base )

	# regenerate the typeinfo header before compiling the module ( the tool
	# must run from the repository root, it finds the tree through the
	# SOURCE_CODE_BASE_FOLDER define in framework/Licensee.h )
	add_custom_command(
		OUTPUT ${CMAKE_SOURCE_DIR}/game/gamesys/GameTypeInfo.h
		COMMAND $<TARGET_FILE:typeinfo>
		WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/..
		DEPENDS typeinfo
		COMMENT "Running typeinfo to generate GameTypeInfo.h" )
	target_sources( game PRIVATE ${CMAKE_SOURCE_DIR}/game/gamesys/GameTypeInfo.h )
else()
	add_library( game SHARED ${GAME_SOURCES} )
	target_compile_definitions( game PRIVATE GAME_DLL )
	set_target_properties( game PROPERTIES
		OUTPUT_NAME gamex86-base
		LIBRARY_OUTPUT_DIRECTORY ${DOOM3_OUTPUT_DIR}/base )
endif()

target_link_libraries( game PRIVATE idlib )
