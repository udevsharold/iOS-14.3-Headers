/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXProactiveSuggestionLayoutConfig : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying> {

	long long _applicableLayoutType;

}

@property (nonatomic,readonly) long long applicableLayoutType;              //@synthesize applicableLayoutType=_applicableLayoutType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)layoutConfigurationsForLayoutOptions:(unsigned long long)arg1 ;
-(id)encodeAsProto;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithApplicableSuggestionLayout:(long long)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)applicableLayoutType;
-(id)initWithProto:(id)arg1 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg1 ;
@end

