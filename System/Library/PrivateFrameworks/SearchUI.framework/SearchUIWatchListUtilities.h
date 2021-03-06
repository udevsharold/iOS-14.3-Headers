/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SearchUIWatchListUtilities : NSObject {

	BOOL _isWatchListed;
	NSString* _watchListIdentifier;

}

@property (assign,nonatomic) BOOL isWatchListed;                          //@synthesize isWatchListed=_isWatchListed - In the implementation block
@property (nonatomic,retain) NSString * watchListIdentifier;              //@synthesize watchListIdentifier=_watchListIdentifier - In the implementation block
+(void)generateWatchListReponseForWatchListIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithResponse:(id)arg1 ;
-(NSString *)watchListIdentifier;
-(void)toggleWatchListWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 watchListed:(BOOL)arg2 ;
-(void)setIsWatchListed:(BOOL)arg1 ;
-(void)setWatchListIdentifier:(NSString *)arg1 ;
-(BOOL)isWatchListed;
@end

