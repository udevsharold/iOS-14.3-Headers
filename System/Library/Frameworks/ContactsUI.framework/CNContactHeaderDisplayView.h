/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactHeaderView.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/CNUIReusableView.h>

@class NSDictionary, CNContactFormatter, NSString, UIView, UILabel, CNContactDowntimeView, NSLayoutConstraint, CNContactGeminiView, CNGeminiResult, CNGeminiPickerController;

@interface CNContactHeaderDisplayView : CNContactHeaderView <CNPickerControllerDelegate, UINavigationControllerDelegate, CNUIReusableView> {

	NSDictionary* _taglineTextAttributes;
	NSDictionary* _downtimeTextAttributes;
	NSDictionary* _geminiTextAttributes;
	BOOL _shouldShowGemini;
	BOOL _isEmergencyContact;
	BOOL _isRestrictedContact;
	BOOL _isDowntimeContact;
	BOOL _allowsPickerActions;
	CNContactFormatter* _contactFormatter;
	NSDictionary* _importantTextAttributes;
	NSString* _alternateName;
	NSString* _message;
	NSString* _importantMessage;
	UIView* _personHeaderView;
	UILabel* _taglineLabel;
	UILabel* _importantLabel;
	CNContactDowntimeView* _downtimeView;
	double _minLabelsHeight;
	double _maxLabelsHeight;
	NSLayoutConstraint* _avatarNameSpacingConstraint;
	CNContactGeminiView* _geminiView;
	CNGeminiResult* _geminiResult;
	CNGeminiPickerController* _geminiPicker;

}

@property (nonatomic,retain) UIView * personHeaderView;                            //@synthesize personHeaderView=_personHeaderView - In the implementation block
@property (retain) UILabel * taglineLabel;                                         //@synthesize taglineLabel=_taglineLabel - In the implementation block
@property (nonatomic,retain) UILabel * importantLabel;                             //@synthesize importantLabel=_importantLabel - In the implementation block
@property (nonatomic,retain) CNContactDowntimeView * downtimeView;                 //@synthesize downtimeView=_downtimeView - In the implementation block
@property (assign,nonatomic) double minLabelsHeight;                               //@synthesize minLabelsHeight=_minLabelsHeight - In the implementation block
@property (assign,nonatomic) double maxLabelsHeight;                               //@synthesize maxLabelsHeight=_maxLabelsHeight - In the implementation block
@property (retain) NSLayoutConstraint * avatarNameSpacingConstraint;               //@synthesize avatarNameSpacingConstraint=_avatarNameSpacingConstraint - In the implementation block
@property (retain) CNContactGeminiView * geminiView;                               //@synthesize geminiView=_geminiView - In the implementation block
@property (retain) CNGeminiResult * geminiResult;                                  //@synthesize geminiResult=_geminiResult - In the implementation block
@property (nonatomic,retain) CNGeminiPickerController * geminiPicker;              //@synthesize geminiPicker=_geminiPicker - In the implementation block
@property (assign,nonatomic) BOOL shouldShowGemini;                                //@synthesize shouldShowGemini=_shouldShowGemini - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,copy) NSDictionary * taglineTextAttributes; 
@property (nonatomic,copy) NSDictionary * importantTextAttributes;                 //@synthesize importantTextAttributes=_importantTextAttributes - In the implementation block
@property (nonatomic,retain) NSString * alternateName;                             //@synthesize alternateName=_alternateName - In the implementation block
@property (nonatomic,retain) NSString * message;                                   //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * importantMessage;                          //@synthesize importantMessage=_importantMessage - In the implementation block
@property (assign,nonatomic) unsigned long long avatarStyle; 
@property (assign,nonatomic) BOOL isEmergencyContact;                              //@synthesize isEmergencyContact=_isEmergencyContact - In the implementation block
@property (assign,nonatomic) BOOL isRestrictedContact;                             //@synthesize isRestrictedContact=_isRestrictedContact - In the implementation block
@property (assign,nonatomic) BOOL isDowntimeContact;                               //@synthesize isDowntimeContact=_isDowntimeContact - In the implementation block
@property (assign,nonatomic) BOOL allowsPickerActions;                             //@synthesize allowsPickerActions=_allowsPickerActions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(BOOL)arg2 shouldAllowImageDrops:(BOOL)arg3 monogramOnly:(BOOL)arg4 ;
+(id)sizeAttributesShowingNavBar:(BOOL)arg1 ;
+(id)descriptorForRequiredKeysForContactFormatter:(id)arg1 ;
+(id)contactHeaderViewWithContact:(id)arg1 showingNavBar:(BOOL)arg2 monogramOnly:(BOOL)arg3 delegate:(id)arg4 ;
+(id)contactHeaderViewWithContact:(id)arg1 allowsPhotoDrops:(BOOL)arg2 showingNavBar:(BOOL)arg3 monogramOnly:(BOOL)arg4 delegate:(id)arg5 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)copy:(id)arg1 ;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 monogrammerStyle:(long long)arg3 shouldAllowImageDrops:(BOOL)arg4 showingNavBar:(BOOL)arg5 monogramOnly:(BOOL)arg6 delegate:(id)arg7 ;
-(void)updateConstraints;
-(NSString *)message;
-(id)descriptorForRequiredKeys;
-(void)tintColorDidChange;
-(void)menuWillHide:(id)arg1 ;
-(UILabel *)taglineLabel;
-(void)updateFontSizes;
-(void)setTaglineTextAttributes:(NSDictionary *)arg1 ;
-(void)setNameTextAttributes:(id)arg1 ;
-(id)_headerStringForContacts:(id)arg1 ;
-(id)_taglineStringForContacts:(id)arg1 ;
-(void)handleNameLabelLongPress:(id)arg1 ;
-(NSString *)alternateName;
-(void)setAlternateName:(NSString *)arg1 ;
-(NSDictionary *)taglineTextAttributes;
-(void)setTaglineLabel:(UILabel *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)reloadDataPreservingChanges:(BOOL)arg1 ;
-(void)setIsEmergencyContact:(BOOL)arg1 ;
-(void)setGeminiResult:(CNGeminiResult *)arg1 ;
-(BOOL)shouldShowGemini;
-(void)setShouldShowGemini:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isEmergencyContact;
-(CNContactGeminiView *)geminiView;
-(double)minHeight;
-(double)maxHeight;
-(double)defaultMaxHeight;
-(void)calculateLabelSizesIfNeeded;
-(void)didFinishUsing;
-(void)updateSizeDependentAttributes;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(unsigned long long)avatarStyle;
-(void)pickerDidCancel:(id)arg1 ;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 showingNavBar:(BOOL)arg3 monogramOnly:(BOOL)arg4 delegate:(id)arg5 ;
-(void)createGeminiViewIfNeeded;
-(void)setAvatarStyle:(unsigned long long)arg1 ;
-(void)setImportantMessage:(NSString *)arg1 ;
-(void)calculateLabelSizes;
-(void)setIsRestrictedContact:(BOOL)arg1 ;
-(void)setIsDowntimeContact:(BOOL)arg1 ;
-(void)disablePhotoTapGesture;
-(CNContactDowntimeView *)downtimeView;
-(void)setImportantTextAttributes:(NSDictionary *)arg1 ;
-(void)setDowntimeTextAttributes:(id)arg1 ;
-(id)downtimeTextAttributes;
-(void)setGeminiTextAttributes:(id)arg1 ;
-(id)geminiTextAttributes;
-(void)_updatePhotoView;
-(void)_updateDowntimeView;
-(void)_updateImportantLabel;
-(void)updateGeminiResult:(id)arg1 ;
-(id)_importantString;
-(void)handleGeminiViewTouch:(id)arg1 ;
-(NSDictionary *)importantTextAttributes;
-(NSString *)importantMessage;
-(BOOL)isRestrictedContact;
-(BOOL)isDowntimeContact;
-(BOOL)allowsPickerActions;
-(void)setAllowsPickerActions:(BOOL)arg1 ;
-(UIView *)personHeaderView;
-(void)setPersonHeaderView:(UIView *)arg1 ;
-(UILabel *)importantLabel;
-(void)setImportantLabel:(UILabel *)arg1 ;
-(void)setDowntimeView:(CNContactDowntimeView *)arg1 ;
-(double)minLabelsHeight;
-(double)maxLabelsHeight;
-(void)setMinLabelsHeight:(double)arg1 ;
-(void)setMaxLabelsHeight:(double)arg1 ;
-(NSLayoutConstraint *)avatarNameSpacingConstraint;
-(void)setGeminiView:(CNContactGeminiView *)arg1 ;
-(void)setAvatarNameSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(CNGeminiResult *)geminiResult;
-(CNGeminiPickerController *)geminiPicker;
-(void)setGeminiPicker:(CNGeminiPickerController *)arg1 ;
@end
