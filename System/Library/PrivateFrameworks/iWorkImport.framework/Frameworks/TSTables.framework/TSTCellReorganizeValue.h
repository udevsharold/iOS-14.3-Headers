/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSTCellReorganizeValue : NSObject {

	int _valueType;
	int _rank;
	double _doubleValue;
	NSString* _string;

}

@property (assign,nonatomic) int valueType;                   //@synthesize valueType=_valueType - In the implementation block
@property (assign,nonatomic) int rank;                        //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) double doubleValue;              //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,retain) NSString * string;               //@synthesize string=_string - In the implementation block
-(int)valueType;
-(void)setString:(NSString *)arg1 ;
-(NSString *)string;
-(void)setDoubleValue:(double)arg1 ;
-(double)doubleValue;
-(void)setValueType:(int)arg1 ;
-(void)setRank:(int)arg1 ;
-(int)rank;
@end

