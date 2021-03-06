/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSURLParserBagContract.h>

@class AMSBagValue, SSURLBag, NSString;

@interface SKURLParserBagContract : NSObject <AMSURLParserBagContract> {

	SSURLBag* _bag;

}

@property (nonatomic,retain) SSURLBag * bag;                                     //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) AMSBagValue * commerceUIURLPatterns; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedContract;
-(id)init;
-(SSURLBag *)bag;
-(void)setBag:(SSURLBag *)arg1 ;
-(AMSBagValue *)commerceUIURLPatterns;
@end

