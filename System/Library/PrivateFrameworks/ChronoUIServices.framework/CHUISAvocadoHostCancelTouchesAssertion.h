/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSArray, NSString;

@interface CHUISAvocadoHostCancelTouchesAssertion : NSObject <BSInvalidatable> {

	BOOL _invalidated;
	NSArray* _assertions;

}

@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assertions;                        //@synthesize assertions=_assertions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isInvalidated;
-(void)invalidate;
-(NSArray *)assertions;
-(id)initWithAssertions:(id)arg1 ;
@end

