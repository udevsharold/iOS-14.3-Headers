/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol CNCancelable;
@class CNContact, CNContactMatchInfo, CNContactFormatter, CNContactListStyleApplier;

@interface CNContactListTableViewCell : UITableViewCell {

	BOOL _isMeCard;
	BOOL _enabled;
	BOOL _isEmergencyContact;
	BOOL _hasBeenDisplayed;
	CNContact* _contact;
	CNContactMatchInfo* _contactMatchInfo;
	CNContactFormatter* _contactFormatter;
	CNContactListStyleApplier* _contactListStyleApplier;
	/*^block*/id _selectedBackgroundViewConfiguration;
	id<CNCancelable> _summaryCancelationToken;

}

@property (nonatomic,retain) id<CNCancelable> summaryCancelationToken;                         //@synthesize summaryCancelationToken=_summaryCancelationToken - In the implementation block
@property (assign,nonatomic) BOOL hasBeenDisplayed;                                            //@synthesize hasBeenDisplayed=_hasBeenDisplayed - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactMatchInfo * contactMatchInfo;                            //@synthesize contactMatchInfo=_contactMatchInfo - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                            //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,retain) CNContactListStyleApplier * contactListStyleApplier;              //@synthesize contactListStyleApplier=_contactListStyleApplier - In the implementation block
@property (assign,nonatomic) BOOL isMeCard;                                                    //@synthesize isMeCard=_isMeCard - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL isEmergencyContact;                                          //@synthesize isEmergencyContact=_isEmergencyContact - In the implementation block
@property (nonatomic,copy) id selectedBackgroundViewConfiguration;                             //@synthesize selectedBackgroundViewConfiguration=_selectedBackgroundViewConfiguration - In the implementation block
-(CNContactFormatter *)contactFormatter;
-(void)setContactListStyleApplier:(CNContactListStyleApplier *)arg1 ;
-(CNContactListStyleApplier *)contactListStyleApplier;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setContact:(CNContact *)arg1 ;
-(id)selectedBackgroundViewConfiguration;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHasBeenDisplayed:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)dealloc;
-(BOOL)hasBeenDisplayed;
-(void)setSummaryCancelationToken:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)summaryCancelationToken;
-(BOOL)isMeCard;
-(void)cancelAsyncOperations;
-(CNContact *)contact;
-(void)setIsEmergencyContact:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(BOOL)isEmergencyContact;
-(void)setContactMatchInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(CNContactMatchInfo *)contactMatchInfo;
-(void)setSelectedBackgroundViewConfiguration:(id)arg1 ;
-(void)setContactMatchInfo:(CNContactMatchInfo *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setIsMeCard:(BOOL)arg1 ;
@end
