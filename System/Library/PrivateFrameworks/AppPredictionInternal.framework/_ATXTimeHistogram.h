/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _ATXTimeHistogram : NSObject <NSSecureCoding> {

	unsigned _count;
	SCD_Struct_AT67* _entries;
	unsigned short _bucketCount;
	BOOL _applyFilter;

}

@property (nonatomic,readonly) unsigned short pointsPerTimeInterval; 
@property (nonatomic,readonly) BOOL applyFilter;                                  //@synthesize applyFilter=_applyFilter - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)enumerate:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned short)pointsPerTimeInterval;
-(BOOL)applyFilter;
@end

