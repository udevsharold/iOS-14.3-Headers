/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SGRecordId, NSString;

@interface SGReminderMetadata : NSObject <NSSecureCoding, NSCopying> {

	SGRecordId* _recordId;
	NSString* _sourceUniqueIdentifier;

}

@property (nonatomic,readonly) SGRecordId * recordId;                          //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,readonly) NSString * sourceUniqueIdentifier;              //@synthesize sourceUniqueIdentifier=_sourceUniqueIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(SGRecordId *)recordId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRecordId:(id)arg1 sourceUniqueIdentifier:(id)arg2 ;
-(BOOL)isEqualToReminderMetadata:(id)arg1 ;
-(NSString *)sourceUniqueIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
@end

