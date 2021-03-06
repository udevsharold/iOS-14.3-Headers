/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchML/TMLBlockSignalHandler.h>
#import <libobjc.A.dylib/TMLBinder.h>

@class TMLBinding, NSString;

@interface TMLPropertyChangedBlockSignalHandler : TMLBlockSignalHandler <TMLBinder> {

	TMLBinding* _binding;

}

@property (nonatomic,readonly) long long bindingOrder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)detach;
-(void)attach;
-(void)bindingValueChanged:(id)arg1 ;
-(long long)bindingOrder;
-(id)initWithBlock:(/*^block*/id)arg1 binding:(id)arg2 ;
@end

