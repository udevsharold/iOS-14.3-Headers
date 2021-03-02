/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@interface RETransformerInvocation : NSObject {

	vector<unsigned long, std::__1::allocator<unsigned long> >* _values;

}

@property (nonatomic,readonly) unsigned long long numberOfArguments; 
+(id)invocationWithArguments:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)numberOfArguments;
-(void)setArgument:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)getArgumentAtIndex:(unsigned long long)arg1 ;
@end
