/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/DRSDecisionServerBatchRequest.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class DRSProtoClientDeviceMetadata, NSMutableArray, NSString;

@interface DRSProtoEnableDataGatheringRequestBatch : PBCodable <DRSDecisionServerBatchRequest, CKCodeOperationMessageMutation, NSCopying> {

	DRSProtoClientDeviceMetadata* _clientMetadata;
	NSMutableArray* _dataGatheringRequests;

}

@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) DRSProtoClientDeviceMetadata * clientMetadata; 
@property (nonatomic,retain) NSMutableArray * requests; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) DRSProtoClientDeviceMetadata * clientMetadata;              //@synthesize clientMetadata=_clientMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * dataGatheringRequests;                     //@synthesize dataGatheringRequests=_dataGatheringRequests - In the implementation block
+(Class)dataGatheringRequestsType;
-(NSMutableArray *)requests;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasClientMetadata;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setClientMetadata:(DRSProtoClientDeviceMetadata *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(DRSProtoClientDeviceMetadata *)clientMetadata;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addDataGatheringRequests:(id)arg1 ;
-(unsigned long long)dataGatheringRequestsCount;
-(void)clearDataGatheringRequests;
-(id)dataGatheringRequestsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)dataGatheringRequests;
-(void)setDataGatheringRequests:(NSMutableArray *)arg1 ;
@end

