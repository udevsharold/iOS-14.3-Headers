/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPointerArray, NSString;

@interface CUState : NSObject {

	/*^block*/id _eventHandler;
	unsigned long long _index;
	NSPointerArray* _lcaMap;
	NSString* _name;
	CUState* _parent;

}

@property (nonatomic,copy) id eventHandler;                       //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
-(id)initWithName:(id)arg1 parent:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)invalidate;
@end

