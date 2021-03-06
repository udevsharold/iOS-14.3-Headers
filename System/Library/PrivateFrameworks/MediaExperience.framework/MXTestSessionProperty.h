/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaExperience/MediaExperience-Structs.h>
#import <MediaExperience/MXTestSessionFactory.h>

@interface MXTestSessionProperty : MXTestSessionFactory {

	opaqueCMSessionRef mSession;

}
-(int)verifyClientPriority:(unsigned)arg1 ;
-(int)verifyAudioHWControlFlags:(unsigned)arg1 ;
-(int)verifyInterruptionStyle:(unsigned)arg1 ;
-(int)verifyAudioCategoryBehavior:(opaqueCMSessionRef)arg1 isMixable:(CFBooleanRef)arg2 postsResumableInterruption:(unsigned char)arg3 isPlayAndRecord:(unsigned char)arg4 withBluetooth:(unsigned char)arg5 andIsDefaultToSpeaker:(unsigned char)arg6 ;
-(int)verifyCategoryCustomization:(unsigned char)arg1 andBuiltInRoute:(CFStringRef)arg2 ;
-(int)verifyOverrideRoute:(unsigned char)arg1 ;
-(int)testClientName;
-(int)testIsAudioSession;
-(int)testAudioSessionID;
-(int)testIsFigInstantiatedAudioSession;
-(int)testClientPriority;
-(int)testAudioHardwareControlFlags;
-(int)testInterruptionStyle;
-(int)testAudioCategory;
-(int)testAudioMode;
-(int)testOverrideRoute;
-(int)testReporterIDs;
-(int)testCategoryCustomizationEnableBluetoothRecording;
-(int)testCategoryCustomizationDefaultBuiltInRoute;
@end

