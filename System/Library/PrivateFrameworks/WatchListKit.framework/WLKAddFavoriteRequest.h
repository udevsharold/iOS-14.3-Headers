/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKRequest.h>

@class NSString, WLKWatchListModificationResponse;

@interface WLKAddFavoriteRequest : WLKRequest {

	NSString* _channelID;
	NSString* _canonicalID;
	NSString* _statsID;
	NSString* _bundleID;
	NSString* _externalID;
	WLKWatchListModificationResponse* _response;

}

@property (nonatomic,copy,readonly) NSString * canonicalID;                              //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * statsID;                                  //@synthesize statsID=_statsID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;                               //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) WLKWatchListModificationResponse * response;              //@synthesize response=_response - In the implementation block
-(WLKWatchListModificationResponse *)response;
-(NSString *)bundleID;
-(NSString *)canonicalID;
-(id)initWithCanonicalID:(id)arg1 ;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)externalID;
-(NSString *)statsID;
-(id)initWithStatsID:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 externalID:(id)arg2 ;
@end
