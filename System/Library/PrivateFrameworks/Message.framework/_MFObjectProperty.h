/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MFObjectProperty : NSObject {

	Class _class;
	SEL _property;

}

@property (assign,nonatomic) Class class;               //@synthesize class=_class - In the implementation block
@property (assign,nonatomic) SEL property;              //@synthesize property=_property - In the implementation block
+(id)objectPropertyWithClass:(Class)arg1 property:(SEL)arg2 ;
-(Class)class;
-(SEL)property;
-(void)setProperty:(SEL)arg1 ;
-(void)setClass:(Class)arg1 ;
@end
