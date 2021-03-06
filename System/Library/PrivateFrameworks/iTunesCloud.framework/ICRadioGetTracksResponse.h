/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRadioResponse.h>

@class NSDate, ICRadioStationMetadata, NSArray;

@interface ICRadioGetTracksResponse : ICRadioResponse {

	NSDate* _assetExpirationDate;

}

@property (nonatomic,readonly) ICRadioStationMetadata * stationMetadata; 
@property (nonatomic,readonly) long long tracklistActionType; 
@property (nonatomic,copy,readonly) NSArray * tracks; 
@property (nonatomic,copy,readonly) NSDate * assetExpirationDate;                     //@synthesize assetExpirationDate=_assetExpirationDate - In the implementation block
-(NSArray *)tracks;
-(NSDate *)assetExpirationDate;
-(id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(ICRadioStationMetadata *)stationMetadata;
-(long long)tracklistActionType;
@end

