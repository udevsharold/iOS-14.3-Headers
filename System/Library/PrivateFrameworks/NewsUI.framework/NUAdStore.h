/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NUAdStore : NSObject {

	NSMutableDictionary* _ads;

}

@property (nonatomic,readonly) NSMutableDictionary * ads;              //@synthesize ads=_ads - In the implementation block
-(id)init;
-(void)addAd:(id)arg1 ;
-(id)allAds;
-(NSMutableDictionary *)ads;
-(id)adsForState:(unsigned long long)arg1 ;
-(void)removeAd:(id)arg1 ;
@end
