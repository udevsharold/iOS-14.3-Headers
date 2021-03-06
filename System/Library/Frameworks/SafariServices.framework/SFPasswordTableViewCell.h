/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/SFPasswordTableViewCell.h>
@class WBSSavedPassword;


@protocol SFPasswordTableViewCell <NSObject>
@property (nonatomic,readonly) WBSSavedPassword * savedPassword; 
@required
-(void)setIcon:(id)arg1;
-(WBSSavedPassword *)savedPassword;
-(void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2;

@end


@class WBSSavedPassword, UILabel, UIView, NSString;

@interface SFPasswordTableViewCell : UITableViewCell <SFPasswordTableViewCell> {

	UILabel* _monogramLabel;
	UIView* _monogramBackgroundView;
	WBSSavedPassword* _savedPassword;
	NSString* _searchPattern;

}

@property (nonatomic,readonly) WBSSavedPassword * savedPassword;              //@synthesize savedPassword=_savedPassword - In the implementation block
@property (nonatomic,readonly) NSString * searchPattern;                      //@synthesize searchPattern=_searchPattern - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setIcon:(id)arg1 ;
-(WBSSavedPassword *)savedPassword;
-(void)safari_copyUserName;
-(void)safari_copyPassword;
-(void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2 ;
-(NSString *)searchPattern;
-(void)setSavedPassword:(id)arg1 withWarnings:(id)arg2 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(BOOL)arg3 ;
-(void)setSavedPassword:(id)arg1 searchPattern:(id)arg2 ;
@end

