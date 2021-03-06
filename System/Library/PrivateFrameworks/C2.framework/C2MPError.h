/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface C2MPError : PBCodable <NSCopying> {

	long long _errorCode;
	NSString* _errorDescription;
	NSString* _errorDomain;
	C2MPError* _underlyingError;
	SCD_Struct_C25 _has;

}

@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                   //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                      //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasUnderlyingError; 
@property (nonatomic,retain) C2MPError * underlyingError;              //@synthesize underlyingError=_underlyingError - In the implementation block
-(BOOL)hasErrorDescription;
-(long long)errorCode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setUnderlyingError:(C2MPError *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(NSString *)errorDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasErrorCode;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(C2MPError *)underlyingError;
-(void)setErrorDomain:(NSString *)arg1 ;
-(NSString *)errorDomain;
-(void)setErrorDescription:(NSString *)arg1 ;
-(BOOL)hasErrorDomain;
-(BOOL)hasUnderlyingError;
@end

