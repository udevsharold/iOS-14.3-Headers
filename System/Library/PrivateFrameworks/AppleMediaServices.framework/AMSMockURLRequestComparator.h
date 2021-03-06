/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSURLRequestComparator.h>

@class NSString;

@interface AMSMockURLRequestComparator : NSObject <AMSURLRequestComparator> {

	/*^block*/id _criteriaBlock;

}

@property (nonatomic,copy) id criteriaBlock;                        //@synthesize criteriaBlock=_criteriaBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldOverrideURLRequest:(id)arg1 ;
-(id)initWithCriteriaBlock:(/*^block*/id)arg1 ;
-(id)criteriaBlock;
-(void)setCriteriaBlock:(id)arg1 ;
@end

