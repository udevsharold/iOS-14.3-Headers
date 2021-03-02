/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSData;

@interface HKEADFFileParser : NSObject {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
-(NSData *)data;
-(id)payloadInRange:(NSRange)arg1 ;
-(void)_enumerateHeadersWithHandler:(/*^block*/id)arg1 ;
-(void)enumerateChannelsWithHandler:(/*^block*/id)arg1 ;
-(id)newBuilderWithStartDate:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 ;
@end
