/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PPMockRTAddress, PPMockRTLocation;

@interface PPMockRTMapItem : NSObject {

	NSString* _name;
	PPMockRTAddress* _address;
	PPMockRTLocation* _location;

}

@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) PPMockRTAddress * address;                //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) PPMockRTLocation * location;              //@synthesize location=_location - In the implementation block
-(void)setAddress:(PPMockRTAddress *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(PPMockRTAddress *)address;
-(PPMockRTLocation *)location;
-(void)setLocation:(PPMockRTLocation *)arg1 ;
-(NSString *)name;
@end

