/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>

@interface ISPerformanceDiagnosticsSettings : ISSettings {

	BOOL _shouldTracePerformance;

}

@property (assign,nonatomic) BOOL shouldTracePerformance;              //@synthesize shouldTracePerformance=_shouldTracePerformance - In the implementation block
+(id)settingsControllerModule;
+(id)sharedInstance;
-(void)setDefaultValues;
-(void)setShouldTracePerformance:(BOOL)arg1 ;
-(BOOL)shouldTracePerformance;
@end

