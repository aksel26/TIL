from django import forms
from .models import Board, Comment

class BoardForm(forms.ModelForm):
    class Meta:
        model = Board
        fields = ['title', 'content']

    # def __init__(self,*args,**kwargs):
    #     super().__init__(*args, **kwargs)
    #     self.fields['title'].widget.attr.update({'class':'form-control-sm', 'id':'abcdef'})
    #     self.fields['content'].widget.attr.update({'class':'form-control-sm', 'id':'abcdef'})
        # self.fields[''].widget.attr.update({}) 스니펫?에 관리
class CommentForm(forms.ModelForm):
    class Meta:
        model = Comment
        fields = ['comment']

    # def __init__(self,*args,**kwargs):
    #     super().__init__(*args, **kwargs)
    #     self.fields['comment'].widget.attr.update({'class':'form-control-sm', 'id':'abcdef'})