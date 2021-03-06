/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPHistoryReplicaRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, MSPVectorTimestamp, NSDate, NSString;

@interface _MSPHistoryReplicaPlaceholderRecord : NSObject <MSPHistoryReplicaRecord, NSSecureCoding> {

	NSData* _contents;
	MSPVectorTimestamp* _contentsTimestamp;
	NSDate* _modificationDate;

}

@property (nonatomic,copy,readonly) NSDate * modificationDate;                           //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy,readonly) NSData * contents;                                   //@synthesize contents=_contents - In the implementation block
@property (nonatomic,copy,readonly) MSPVectorTimestamp * contentsTimestamp;              //@synthesize contentsTimestamp=_contentsTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDate *)modificationDate;
-(id)init;
-(MSPVectorTimestamp *)contentsTimestamp;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)contents;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 modificationDate:(id)arg3 ;
@end

