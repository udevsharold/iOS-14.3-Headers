/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LegacySigningKeyPrivate : NSObject {

	id _secKeyRef;

}

@property (nonatomic,retain) id secKeyRef;              //@synthesize secKeyRef=_secKeyRef - In the implementation block
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(id)dataRepresentation;
-(id)init;
-(id)secKeyRef;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)publicKey;
-(void)setSecKeyRef:(id)arg1 ;
@end
