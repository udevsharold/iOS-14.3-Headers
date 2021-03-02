/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface VSValueTypeProperty : NSObject {

	NSString* _name;
	unsigned long long _kind;
	NSSet* _allowedClasses;
	id _initialValue;

}

@property (nonatomic,copy) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long kind;              //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSSet * allowedClasses;                 //@synthesize allowedClasses=_allowedClasses - In the implementation block
@property (nonatomic,retain) id initialValue;                      //@synthesize initialValue=_initialValue - In the implementation block
+(id)valueTypePropertyWithName:(id)arg1 kind:(unsigned long long)arg2 allowedClasses:(id)arg3 initialValue:(id)arg4 ;
-(NSSet *)allowedClasses;
-(id)initialValue;
-(void)setName:(NSString *)arg1 ;
-(void)setAllowedClasses:(NSSet *)arg1 ;
-(void)setInitialValue:(id)arg1 ;
-(NSString *)name;
-(void)setKind:(unsigned long long)arg1 ;
-(unsigned long long)kind;
@end
