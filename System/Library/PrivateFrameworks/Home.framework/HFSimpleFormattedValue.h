/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFDynamicFormattingValue.h>

@protocol HFStringGenerator;
@class NSString;

@interface HFSimpleFormattedValue : NSObject <HFDynamicFormattingValue> {

	id<HFStringGenerator> _currentFormattedValue;

}

@property (nonatomic,readonly) id value; 
@property (nonatomic,readonly) id<HFStringGenerator> currentFormattedValue;              //@synthesize currentFormattedValue=_currentFormattedValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)value;
-(id)observeFormattedValueChangesWithBlock:(/*^block*/id)arg1 ;
-(id<HFStringGenerator>)currentFormattedValue;
-(id)initWithFormattedValue:(id)arg1 ;
@end

