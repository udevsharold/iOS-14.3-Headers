/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PIGlobalSettings : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _settings;
	BOOL _forceGlassesMatteOff;
	BOOL _forceSpillMatteOff;
	BOOL _allowSpillMatteOnOlderPortraitV2Captures;

}

@property (assign,nonatomic) BOOL forceGlassesMatteOff;                                  //@synthesize forceGlassesMatteOff=_forceGlassesMatteOff - In the implementation block
@property (assign,nonatomic) BOOL forceSpillMatteOff;                                    //@synthesize forceSpillMatteOff=_forceSpillMatteOff - In the implementation block
@property (assign,nonatomic) BOOL allowSpillMatteOnOlderPortraitV2Captures;              //@synthesize allowSpillMatteOnOlderPortraitV2Captures=_allowSpillMatteOnOlderPortraitV2Captures - In the implementation block
+(id)globalSettings;
+(id)IPXEditSettings;
+(id)PUEditSettings;
+(BOOL)falseColorHDR;
+(void)setFalseColorHDR:(BOOL)arg1 ;
-(void)setForceSpillMatteOff:(BOOL)arg1 ;
-(id)init;
-(BOOL)forceSpillMatteOff;
-(void)setAllowSpillMatteOnOlderPortraitV2Captures:(BOOL)arg1 ;
-(void)setForceGlassesMatteOff:(BOOL)arg1 ;
-(BOOL)forceGlassesMatteOff;
-(BOOL)allowSpillMatteOnOlderPortraitV2Captures;
-(id)decoratorRenderFiltersForImages;
-(id)decoratorRenderFiltersForVideos;
@end
