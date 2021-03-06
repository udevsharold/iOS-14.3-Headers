/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CNAccountsAndGroupsItem : NSObject {

	BOOL _selected;
	BOOL _bypassIfUnique;
	BOOL _soloSelect;
	NSString* _name;
	/*^block*/id _nameProvider;
	NSString* _identifier;
	long long _containerType;
	NSArray* _childItems;
	CNAccountsAndGroupsItem* _parentItem;
	long long _type;

}

@property (nonatomic,retain) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) id nameProvider;                                   //@synthesize nameProvider=_nameProvider - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long containerType;                                  //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,retain) NSArray * childItems;                                     //@synthesize childItems=_childItems - In the implementation block
@property (assign,nonatomic,__weak) CNAccountsAndGroupsItem * parentItem;              //@synthesize parentItem=_parentItem - In the implementation block
@property (assign,nonatomic) BOOL bypassIfUnique;                                      //@synthesize bypassIfUnique=_bypassIfUnique - In the implementation block
@property (assign,nonatomic) BOOL soloSelect;                                          //@synthesize soloSelect=_soloSelect - In the implementation block
@property (nonatomic,readonly) long long type;                                         //@synthesize type=_type - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                          //@synthesize selected=_selected - In the implementation block
-(NSArray *)childItems;
-(void)setName:(NSString *)arg1 ;
-(long long)localizedCompare:(id)arg1 ;
-(BOOL)isSelected;
-(void)setParentItem:(CNAccountsAndGroupsItem *)arg1 ;
-(id)arrayForDisplay:(BOOL)arg1 ;
-(void)setBypassIfUnique:(BOOL)arg1 ;
-(CNAccountsAndGroupsItem *)parentItem;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)soloSelect;
-(long long)type;
-(id)nameProvider;
-(void)setChildItems:(NSArray *)arg1 ;
-(BOOL)bypassIfUnique;
-(NSString *)name;
-(id)initWithType:(long long)arg1 nameProvider:(/*^block*/id)arg2 ;
-(void)setContainerType:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_setSelected:(BOOL)arg1 affectingChildren:(BOOL)arg2 ;
-(void)setSoloSelect:(BOOL)arg1 ;
-(long long)containerType;
@end

