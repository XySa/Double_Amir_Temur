# Changelog

All notable changes to this project will be documented in this file.
This project adheres to [Semantic Versioning](http://semver.org/).

## [0.12.1] 2022-02-16

## Added

- added bonemapping for humanoid skeleton

## Changed

- updated gltfRuntime fork with updates for duplicate morph target names
- enabled import morph targets on RPM_Mixamo_SkeletalMesh

## [0.12.0] 2022-02-02

## Changed

- updated glTFRuntime fork to get latest changes
- plugin config and code updates to allow for plugin packaging for BP Only projects
- RPM skeleton's retargeting settings

## Fixed

- updated skeleton retargeting for eye position issues
- conversion issues when building for Linux
- syntax errors preventing UE5 compatibility

## [0.11.0] 2022-01-11

## Added

- Ready Player Me Actor component

## Changed

- refactored ReadyPlayerMeunctionLibrary
- separated common variables into separate header

## [0.10.2] 2021-10-22

## Fixed

- updated glTFRuntime version to fix build errors

## [0.10.1] 2021-10-12

## Fixed

- error in LoadAvatarMetaData preventing the project from compiling

## [0.10.0] 2021-10-12

## Added

- basic shortcode URL validation

## Changed

- updated fullbody reference skeleton mesh and BP

## Removed

- support for old avatars with V1 skeleton

## Fixed

- errors from invalid shortcode URL's for fullbody avatars

## [0.9.0] 2021-9-10

## Fixed

- updated glTFRuntime fork with latest updates to support unreal 4.27

## [0.8.1] 2021-08-19

## Fixed

- issue with regex on different build platforms

## [0.8.0] 2021-08-03

## Changed

- general cleanup and bugfixes
- added support for shortcodes

## [0.7.0] 2021-06-09

## Changed

- bug fixes for loading VR avatar meta data
- code cleanup
- simplified example blueprints

## Added

- check for missing meta data fields and morph targets

## [0.6.0] 2021-05-19

## Changed

- removed glTFRuntime plugin and readded as forked submobule

## Added

- temporary workaround for morph targets naming clash
- include headers to ReadyPlayerMeFunctionLibrary.cpp to fix android build errors

## [0.5.0] 2021-05-04

## Changed

- avatar loading logic
- updated reference avatar fbx

## Added

- support for V2 rigged avatars
- loading generated json metadata

## [0.4.0] 2021-04-11

## Changed

- Updated reference animation skeleton
- Reworked scale logic to work with downloaded animations
- changed mesh bounds scale

## Added

- scale logic for half body

## [0.3.0] 2021-04-08

## Changed

- Skeletal mesh loading now using async

## [0.2.0] 2021-03-11

## Changed

- Added license file and readme
- Minor cleanup and refactoring
- Project name and details

## [0.1.0] 2021-03-05

## Added

- Unreal project and setup files
- glTFRuntime plugin
- Blueprint function library
- example scene
- reference rpm character and animation targets
- Demo map example scene
