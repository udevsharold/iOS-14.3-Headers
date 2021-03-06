/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKSearchAutocompleteToken.h>

@class NSString;

@interface PKSearchTransactionSourceResult : NSObject <PKSearchAutocompleteToken> {

	unsigned long long _transactionSource;

}

@property (assign,nonatomic) unsigned long long transactionSource;              //@synthesize transactionSource=_transactionSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)tokenType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)transactionSource;
-(void)setTransactionSource:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

