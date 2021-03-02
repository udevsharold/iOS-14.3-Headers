/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSAttributedString, NSString;

@interface UIAccessibilityCustomRotor : NSObject {

	NSUUID* uuid;
	id targetElement;
	long long systemRotorType;
	NSAttributedString* _attributedName;
	/*^block*/id _itemSearchBlock;

}

@property (nonatomic,retain) NSUUID * uuid; 
@property (assign,nonatomic,__weak) id targetElement; 
@property (assign,nonatomic) long long systemRotorType; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSAttributedString * attributedName;              //@synthesize attributedName=_attributedName - In the implementation block
@property (nonatomic,copy) id itemSearchBlock;                               //@synthesize itemSearchBlock=_itemSearchBlock - In the implementation block
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithAttributedName:(id)arg1 itemSearchBlock:(/*^block*/id)arg2 ;
-(id)initWithSystemType:(long long)arg1 itemSearchBlock:(/*^block*/id)arg2 ;
-(id)targetElement;
-(NSUUID *)uuid;
-(id)initWithName:(id)arg1 itemSearchBlock:(/*^block*/id)arg2 ;
-(long long)systemRotorType;
-(id)itemSearchBlock;
-(NSAttributedString *)attributedName;
-(void)setTargetElement:(id)arg1 ;
-(NSString *)name;
-(void)setAttributedName:(NSAttributedString *)arg1 ;
-(void)setItemSearchBlock:(id)arg1 ;
-(void)setSystemRotorType:(long long)arg1 ;
@end
