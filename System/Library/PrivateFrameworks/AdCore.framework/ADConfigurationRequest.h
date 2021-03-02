/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface ADConfigurationRequest : PBRequest <NSCopying> {

	NSMutableArray* _currentConfigurations;
	NSData* _iAdID;

}

@property (nonatomic,retain) NSMutableArray * currentConfigurations;              //@synthesize currentConfigurations=_currentConfigurations - In the implementation block
@property (nonatomic,readonly) BOOL hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                                      //@synthesize iAdID=_iAdID - In the implementation block
+(id)options;
+(Class)currentConfigurationType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)iAdID;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)currentConfigurations;
-(void)setCurrentConfigurations:(NSMutableArray *)arg1 ;
-(BOOL)hasIAdID;
-(void)writeTo:(id)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(void)addCurrentConfiguration:(id)arg1 ;
-(unsigned long long)currentConfigurationsCount;
-(void)clearCurrentConfigurations;
-(id)currentConfigurationAtIndex:(unsigned long long)arg1 ;
@end
