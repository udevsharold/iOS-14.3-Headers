/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {

	NSString* _name;
	NSString* _grouping;
	id _value;
	NSMutableArray* _types;
	BOOL _primary;

}
-(BOOL)isPrimary;
-(id)value;
-(void)dealloc;
-(id)types;
-(void)setValue:(id)arg1 ;
-(id)grouping;
-(void)setGrouping:(id)arg1 ;
-(id)description;
-(void)addType:(id)arg1 ;
-(id)name;
-(id)initWithName:(id)arg1 ;
-(void)setIsPrimary:(BOOL)arg1 ;
-(void)addTypes:(id)arg1 ;
@end
