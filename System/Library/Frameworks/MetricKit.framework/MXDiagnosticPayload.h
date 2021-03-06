/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate;

@interface MXDiagnosticPayload : NSObject <NSSecureCoding> {

	NSArray* _cpuExceptionDiagnostics;
	NSArray* _diskWriteExceptionDiagnostics;
	NSArray* _hangDiagnostics;
	NSArray* _crashDiagnostics;
	NSDate* _timeStampBegin;
	NSDate* _timeStampEnd;

}

@property (readonly) NSArray * cpuExceptionDiagnostics;                    //@synthesize cpuExceptionDiagnostics=_cpuExceptionDiagnostics - In the implementation block
@property (readonly) NSArray * diskWriteExceptionDiagnostics;              //@synthesize diskWriteExceptionDiagnostics=_diskWriteExceptionDiagnostics - In the implementation block
@property (readonly) NSArray * hangDiagnostics;                            //@synthesize hangDiagnostics=_hangDiagnostics - In the implementation block
@property (readonly) NSArray * crashDiagnostics;                           //@synthesize crashDiagnostics=_crashDiagnostics - In the implementation block
@property (readonly) NSDate * timeStampBegin;                              //@synthesize timeStampBegin=_timeStampBegin - In the implementation block
@property (readonly) NSDate * timeStampEnd;                                //@synthesize timeStampEnd=_timeStampEnd - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)dictionaryRepresentation;
-(id)JSONRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)timeStampBegin;
-(NSDate *)timeStampEnd;
-(id)initWithTimeStampBegin:(id)arg1 withTimeStampEnd:(id)arg2 withDiagnostics:(id)arg3 ;
-(NSArray *)cpuExceptionDiagnostics;
-(NSArray *)diskWriteExceptionDiagnostics;
-(NSArray *)hangDiagnostics;
-(NSArray *)crashDiagnostics;
@end

