/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATSessionMessage.h>

@class NSError;

@interface CATSessionMessageDidInvalidate : CATSessionMessage {

	NSError* _error;

}

@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
-(id)initWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

