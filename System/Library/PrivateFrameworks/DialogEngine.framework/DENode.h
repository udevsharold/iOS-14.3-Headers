/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DENode : NSObject {

	shared_ptr<siri::dialogengine::Node>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Node>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * conditionName; 
-(shared_ptr<siri::dialogengine::Node>*)This;
-(id)init;
-(shared_ptr<siri::dialogengine::Node>*)getSharedPtr;
-(void)setThis:(shared_ptr<siri::dialogengine::Node>*)arg1 ;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Node>*)arg1 ;
-(BOOL)isOfType:(unsigned long long)arg1 ;
-(id)getDialog;
-(id)getGlobalId:(id)arg1 ;
-(void)setConditionName:(NSString *)arg1 ;
-(NSString *)conditionName;
@end

