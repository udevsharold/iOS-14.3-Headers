/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSMutableDictionary;

@interface PSSpecifier : NSObject {

	id target;
	SEL getter;
	SEL setter;
	SEL action;
	SEL cancel;
	Class detailControllerClass;
	long long cellType;
	Class editPaneClass;
	long long keyboardType;
	long long autoCapsType;
	long long autoCorrectionType;
	unsigned long long textFieldType;
	NSString* _name;
	NSArray* _values;
	NSDictionary* _titleDict;
	NSDictionary* _shortTitleDict;
	id _userInfo;
	NSMutableDictionary* _properties;
	SEL _confirmationAction;
	SEL _confirmationCancelAction;
	SEL _buttonAction;
	SEL _controllerLoadAction;
	BOOL _showContentString;
	SEL _confirmationAlternateAction;
	id _weakUserInfo;

}

@property (nonatomic,retain) NSArray * values;                                 //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) id userInfo;                                      //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic,__weak) id weakUserInfo;                           //@synthesize weakUserInfo=_weakUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * titleDictionary;                   //@synthesize titleDict=_titleDict - In the implementation block
@property (nonatomic,retain) NSDictionary * shortTitleDictionary;              //@synthesize shortTitleDict=_shortTitleDict - In the implementation block
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic,__weak) id target; 
@property (assign,nonatomic) Class detailControllerClass; 
@property (assign,nonatomic) long long cellType; 
@property (assign,nonatomic) Class editPaneClass; 
@property (assign,nonatomic) SEL confirmationAction;                           //@synthesize confirmationAction=_confirmationAction - In the implementation block
@property (assign,nonatomic) SEL confirmationAlternateAction;                  //@synthesize confirmationAlternateAction=_confirmationAlternateAction - In the implementation block
@property (assign,nonatomic) SEL confirmationCancelAction;                     //@synthesize confirmationCancelAction=_confirmationCancelAction - In the implementation block
@property (assign,nonatomic) SEL buttonAction;                                 //@synthesize buttonAction=_buttonAction - In the implementation block
@property (assign,nonatomic) SEL controllerLoadAction;                         //@synthesize controllerLoadAction=_controllerLoadAction - In the implementation block
@property (assign,nonatomic) BOOL showContentString;                           //@synthesize showContentString=_showContentString - In the implementation block
+(id)groupSpecifierWithID:(id)arg1 ;
+(id)groupSpecifierWithID:(id)arg1 name:(id)arg2 ;
+(id)specifierWithSpecifier:(id)arg1 ;
+(long long)autoCapsTypeForString:(id)arg1 ;
+(long long)autoCorrectionTypeForNumber:(id)arg1 ;
+(long long)keyboardTypeForString:(id)arg1 ;
+(id)deleteButtonSpecifierWithName:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
+(id)emptyGroupSpecifier;
+(id)groupSpecifierWithName:(id)arg1 ;
+(id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(void)setUserInfo:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(void)setCellType:(long long)arg1 ;
-(void)removePropertyForKey:(id)arg1 ;
-(SEL)legacyAction;
-(void)performLegacyAction;
-(SEL)controllerLoadAction;
-(void)performControllerLoadAction;
-(void)performButtonAction;
-(SEL)legacyCancel;
-(SEL)confirmationAction;
-(void)performConfirmationAction;
-(SEL)confirmationAlternateAction;
-(void)performConfirmationAlternateAction;
-(SEL)confirmationCancelAction;
-(void)setLegacyAction:(SEL)arg1 ;
-(void)performConfirmationCancelAction;
-(void)setControllerLoadAction:(SEL)arg1 ;
-(id)init;
-(void)setupIconImageWithPath:(id)arg1 ;
-(Class)detailControllerClass;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)weakUserInfo;
-(void)setDetailControllerClass:(Class)arg1 ;
-(Class)editPaneClass;
-(BOOL)hasValidSetter;
-(void)setEditPaneClass:(Class)arg1 ;
-(void)setLegacyCancel:(SEL)arg1 ;
-(void)setConfirmationAction:(SEL)arg1 ;
-(void)setShowContentString:(BOOL)arg1 ;
-(void)setConfirmationAlternateAction:(SEL)arg1 ;
-(void)setConfirmationCancelAction:(SEL)arg1 ;
-(NSDictionary *)titleDictionary;
-(void)setTitleDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)shortTitleDictionary;
-(void)setShortTitleDictionary:(NSDictionary *)arg1 ;
-(BOOL)hasValidGetter;
-(void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3 ;
-(void)performSetterWithValue:(id)arg1 ;
-(id)performGetter;
-(void)loadValuesAndTitlesFromDataSource;
-(void)setupIconImageWithBundle:(id)arg1 ;
-(void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3 usingLocalizedTitleSorting:(BOOL)arg4 ;
-(long long)titleCompare:(id)arg1 ;
-(void)setWeakUserInfo:(id)arg1 ;
-(id)target;
-(void)setProperties:(id)arg1 ;
-(long long)cellType;
-(id)userInfo;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)description;
-(id)properties;
-(BOOL)isEqualToSpecifier:(id)arg1 ;
-(SEL)buttonAction;
-(void)setTarget:(id)arg1 ;
-(NSString *)name;
-(void)setButtonAction:(SEL)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setValues:(id)arg1 titles:(id)arg2 ;
-(void)setKeyboardType:(long long)arg1 autoCaps:(long long)arg2 autoCorrection:(long long)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)initWithName:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7 ;
-(BOOL)showContentString;
@end

