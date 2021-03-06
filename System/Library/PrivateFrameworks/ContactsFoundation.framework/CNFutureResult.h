/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSError;

@interface CNFutureResult : NSObject {

	id _result;
	NSError* _error;

}

@property (nonatomic,retain) id result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)setResult:(id)arg1 ;
-(id)result;
-(NSError *)error;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setError:(NSError *)arg1 ;
-(void)setResult:(id)arg1 error:(id)arg2 ;
@end

