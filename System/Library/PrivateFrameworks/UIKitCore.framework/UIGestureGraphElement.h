/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface UIGestureGraphElement : NSObject {

	NSMutableDictionary* _properties;
	NSString* _label;

}

@property (nonatomic,copy,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(void)removePropertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setProperties:(id)arg1 ;
-(id)description;
-(void)removeAllProperties;
-(BOOL)hasProperties:(id)arg1 ;
-(NSString *)label;
-(id)propertyForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
@end

