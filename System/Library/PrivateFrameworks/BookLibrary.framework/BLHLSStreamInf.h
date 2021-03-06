/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface BLHLSStreamInf : NSObject {

	NSURL* _url;
	unsigned long long _bandwidth;
	unsigned long long _averageBandwidth;
	NSString* _codecs;
	NSString* _audio;

}

@property (nonatomic,retain) NSURL * url;                                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) unsigned long long bandwidth;                                   //@synthesize bandwidth=_bandwidth - In the implementation block
@property (nonatomic,readonly) unsigned long long averageBandwidth;                            //@synthesize averageBandwidth=_averageBandwidth - In the implementation block
@property (nonatomic,readonly) unsigned long long averageBandwidthFallbackToPeak; 
@property (nonatomic,readonly) NSString * codecs;                                              //@synthesize codecs=_codecs - In the implementation block
@property (nonatomic,readonly) NSString * audio;                                               //@synthesize audio=_audio - In the implementation block
-(NSString *)audio;
-(NSString *)codecs;
-(unsigned long long)bandwidth;
-(void)setPropertiesFromAttributeList:(id)arg1 ;
-(unsigned long long)averageBandwidthFallbackToPeak;
-(unsigned long long)averageBandwidth;
-(id)description;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
@end

