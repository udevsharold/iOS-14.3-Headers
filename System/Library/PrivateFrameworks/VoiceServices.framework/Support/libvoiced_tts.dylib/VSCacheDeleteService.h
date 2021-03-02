/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VSCacheDeleteService : NSObject
+(id)sharedService;
-(id)purgeImpl:(id)arg1 urgency:(int)arg2 ;
-(long long)totalSizeOfAssets:(id)arg1 ;
-(id)purge:(id)arg1 urgency:(int)arg2 ;
-(id)purgeableVoiceAssetsWithInfo:(id)arg1 urgency:(int)arg2 ;
-(id)periodic:(id)arg1 urgency:(int)arg2 ;
-(BOOL)registerCacheDelete;
-(id)purgeable:(id)arg1 urgency:(int)arg2 ;
@end
