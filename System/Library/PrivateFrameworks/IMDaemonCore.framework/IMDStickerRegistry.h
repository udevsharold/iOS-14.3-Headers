/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMDStickerRegistry : NSObject {

	NSMutableDictionary* _stickerPackGUIDToPackMap;

}

@property (retain) NSMutableDictionary * stickerPackGUIDToPackMap;              //@synthesize stickerPackGUIDToPackMap=_stickerPackGUIDToPackMap - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)retrieveStickerWithProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_cachedPathForStickerWithProperties:(id)arg1 ;
-(BOOL)_isRecipeBasedSticker:(id)arg1 ;
-(NSMutableDictionary *)stickerPackGUIDToPackMap;
-(void)setStickerPackGUIDToPackMap:(NSMutableDictionary *)arg1 ;
@end

