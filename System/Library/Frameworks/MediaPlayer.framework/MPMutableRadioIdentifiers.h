/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MPMutableRadioIdentifiers <MPRadioIdentifiers>
@property (nonatomic,copy) NSString * stationStringID; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
@required
-(void)setStationStringID:(id)arg1;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(void)setStationHash:(id)arg1;
-(void)setStationID:(long long)arg1;
-(long long)stationID;

@end

