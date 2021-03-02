/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPCModelRadioContentReference, MPModelRadioStation, NSURL;

@interface MPCRadioPlaybackIntentTracklistToken : NSObject <NSSecureCoding> {

	BOOL _continueListeningStation;
	MPCModelRadioContentReference* _nowPlayingContentReference;
	MPCModelRadioContentReference* _seedContentReference;
	MPModelRadioStation* _radioStation;
	NSURL* _radioStationURL;

}

@property (assign,nonatomic) BOOL continueListeningStation;                                         //@synthesize continueListeningStation=_continueListeningStation - In the implementation block
@property (nonatomic,copy) MPCModelRadioContentReference * nowPlayingContentReference;              //@synthesize nowPlayingContentReference=_nowPlayingContentReference - In the implementation block
@property (nonatomic,copy) MPCModelRadioContentReference * seedContentReference;                    //@synthesize seedContentReference=_seedContentReference - In the implementation block
@property (nonatomic,retain) MPModelRadioStation * radioStation;                                    //@synthesize radioStation=_radioStation - In the implementation block
@property (nonatomic,copy) NSURL * radioStationURL;                                                 //@synthesize radioStationURL=_radioStationURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRadioStation:(MPModelRadioStation *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MPModelRadioStation *)radioStation;
-(MPCModelRadioContentReference *)seedContentReference;
-(MPCModelRadioContentReference *)nowPlayingContentReference;
-(void)setSeedContentReference:(MPCModelRadioContentReference *)arg1 ;
-(void)setNowPlayingContentReference:(MPCModelRadioContentReference *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setContinueListeningStation:(BOOL)arg1 ;
-(void)setRadioStationURL:(NSURL *)arg1 ;
-(BOOL)continueListeningStation;
-(NSURL *)radioStationURL;
@end
