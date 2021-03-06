/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRJSObjectExport.h>

@interface CRJSObject : NSObject <CRJSObjectExport> {

	id _backingObject;

}

@property (nonatomic,readonly) id backingObject;              //@synthesize backingObject=_backingObject - In the implementation block
+(id)objectWithClassName:(id)arg1 objectType:(id)arg2 ;
-(id)backingObject;
-(id)initWithClassName:(id)arg1 objectType:(long long)arg2 ;
-(id)_backingObjectForJSValue:(id)arg1 ;
-(void)_logErrorLog:(id)arg1 ;
-(void)setBackingObjectValue:(id)arg1 forKey:(id)arg2 ;
-(id)backingObjectValueForKey:(id)arg1 ;
@end

