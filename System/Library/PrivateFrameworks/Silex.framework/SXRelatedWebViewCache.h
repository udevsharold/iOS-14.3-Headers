/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface SXRelatedWebViewCache : NSObject {

	NSMapTable* _cache;

}

@property (nonatomic,readonly) NSMapTable * cache;              //@synthesize cache=_cache - In the implementation block
-(NSMapTable *)cache;
-(id)init;
-(id)relatedWebViewForBaseURL:(id)arg1 ;
-(void)storeRelatedWebView:(id)arg1 baseURL:(id)arg2 ;
@end

