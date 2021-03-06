/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSString;

@interface SSPersonalizeOffersRequest : SSRequest <SSXPCCoding> {

	NSArray* _items;

}

@property (assign,nonatomic) id<SSPersonalizeOffersDelegate> delegate; 
@property (nonatomic,readonly) NSArray * items; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithItems:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)startWithPersonalizedResponseBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSArray *)items;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end

