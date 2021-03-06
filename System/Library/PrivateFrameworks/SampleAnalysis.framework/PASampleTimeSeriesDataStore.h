/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SASampleStore;

@interface PASampleTimeSeriesDataStore : NSObject <NSSecureCoding> {

	SASampleStore* _sampleStore;

}

@property (retain) SASampleStore * sampleStore;              //@synthesize sampleStore=_sampleStore - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSampleStore:(id)arg1 ;
-(SASampleStore *)sampleStore;
-(void)setSampleStore:(SASampleStore *)arg1 ;
@end

