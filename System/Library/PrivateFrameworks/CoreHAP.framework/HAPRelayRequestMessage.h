/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableSet, NSData, HMFBlockOperation, NSSet;

@interface HAPRelayRequestMessage : HMFObject {

	NSMutableSet* _requestIdentifiers;
	unsigned short _transactionIdentifier;
	NSData* _body;
	unsigned long long _type;
	double _timeout;
	HMFBlockOperation* _operation;

}

@property (assign,nonatomic) unsigned short transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) NSSet * requestIdentifiers;                      //@synthesize requestIdentifiers=_requestIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSData * body;                              //@synthesize body=_body - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (nonatomic,readonly) BOOL sent; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic,__weak) HMFBlockOperation * operation;              //@synthesize operation=_operation - In the implementation block
-(HMFBlockOperation *)operation;
-(NSData *)body;
-(BOOL)sent;
-(double)timeout;
-(BOOL)isFinished;
-(id)description;
-(unsigned long long)type;
-(unsigned short)transactionIdentifier;
-(BOOL)isEncrypted;
-(void)setTransactionIdentifier:(unsigned short)arg1 ;
-(id)debugDescription;
-(id)shortDescription;
-(void)setOperation:(HMFBlockOperation *)arg1 ;
-(NSSet *)requestIdentifiers;
-(id)initWithRequestData:(id)arg1 messageType:(unsigned long long)arg2 timeout:(double)arg3 ;
-(void)addRequestIdentifier:(id)arg1 ;
@end

