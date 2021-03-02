/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSUUID, NSString, NSArray, NSData, NSDate;

@interface ATXClientModelCacheUpdate : NSObject <NSSecureCoding, BMStoreData, ATXProtoBufWrapper> {

	double _absoluteCacheCreationDate;
	NSUUID* _uuid;
	NSString* _clientModelId;
	NSArray* _suggestions;
	NSData* _feedbackMetadata;

}

@property (nonatomic,readonly) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * clientModelId;                //@synthesize clientModelId=_clientModelId - In the implementation block
@property (nonatomic,readonly) NSArray * suggestions;                   //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) NSData * feedbackMetadata;                 //@synthesize feedbackMetadata=_feedbackMetadata - In the implementation block
@property (nonatomic,readonly) NSDate * cacheCreationDate; 
@property (nonatomic,readonly) unsigned dataVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(NSArray *)suggestions;
-(id)encodeAsProto;
-(unsigned)dataVersion;
-(NSString *)clientModelId;
-(id)serialize;
-(id)jsonRawData;
-(id)init;
-(id)json;
-(id)_clientModelFromClientModelId:(id)arg1 suggestions:(id)arg2 ;
-(void)setFeedbackMetadata:(NSData *)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(NSData *)feedbackMetadata;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(BOOL)isEqualToATXClientModelCacheUpdate:(id)arg1 ;
-(id)initWithProto:(id)arg1 ;
-(id)proto;
-(NSDate *)cacheCreationDate;
-(id)initWithClientModelId:(id)arg1 suggestions:(id)arg2 feedbackMetadata:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithClientModelId:(id)arg1 suggestions:(id)arg2 feedbackMetadata:(id)arg3 uuid:(id)arg4 cacheCreationDate:(id)arg5 ;
@end
